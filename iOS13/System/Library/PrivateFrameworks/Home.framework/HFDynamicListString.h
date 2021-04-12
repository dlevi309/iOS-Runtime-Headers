/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFStringGenerator.h>

@class NSArray, NSString;

@interface HFDynamicListString : NSObject <HFStringGenerator> {

	NSArray* _stringList;
	NSString* _truncationFormat;
	NSString* _summaryFormat;

}

@property (nonatomic,copy) NSArray * stringList;                     //@synthesize stringList=_stringList - In the implementation block
@property (nonatomic,copy) NSString * truncationFormat;              //@synthesize truncationFormat=_truncationFormat - In the implementation block
@property (nonatomic,copy) NSString * summaryFormat;                 //@synthesize summaryFormat=_summaryFormat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)stringList;
-(NSString *)truncationFormat;
-(NSString *)summaryFormat;
-(id)initWithList:(id)arg1 truncationFormat:(id)arg2 summaryFormat:(id)arg3 ;
-(id)attributeStringsSortedBySize:(id)arg1 ;
-(id)dynamicStringForSize:(CGSize)arg1 attributes:(id)arg2 ;
-(id)stringWithAttributes:(id)arg1 ;
-(BOOL)prefersDynamicString;
-(void)setStringList:(NSArray *)arg1 ;
-(void)setTruncationFormat:(NSString *)arg1 ;
-(void)setSummaryFormat:(NSString *)arg1 ;
@end

