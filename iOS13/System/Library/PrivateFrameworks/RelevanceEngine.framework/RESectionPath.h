/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RESectionPath : NSObject <NSCopying> {

	NSString* _sectionName;
	unsigned long long _element;

}

@property (nonatomic,copy,readonly) NSString * sectionName; 
@property (assign,nonatomic) unsigned long long element;                 //@synthesize element=_element - In the implementation block
+(id)sectionPathWithSectionName:(id)arg1 element:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)element;
-(void)setElement:(unsigned long long)arg1 ;
-(NSString *)sectionName;
-(id)initWithSectionName:(id)arg1 element:(unsigned long long)arg2 ;
@end

