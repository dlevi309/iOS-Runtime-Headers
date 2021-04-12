/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/_EditScriptData.h>

@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {

	NSArray* _data;
	NSString* _cachedStringValue;

}

@property (nonatomic,retain) NSArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * cachedStringValue;              //@synthesize cachedStringValue=_cachedStringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2 ;
+(id)EditScriptDataWithArray:(id)arg1 ;
-(void)dealloc;
-(long long)length;
-(NSString *)description;
-(id)initWithArray:(id)arg1 ;
-(id)stringValue;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)stringAtIndex:(long long)arg1 ;
-(void)setCachedStringValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 chunkSize:(long long)arg2 ;
-(long long)lengthOfItem:(long long)arg1 ;
-(long long)characterIndexForItem:(long long)arg1 ;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 ;
-(NSString *)cachedStringValue;
@end

