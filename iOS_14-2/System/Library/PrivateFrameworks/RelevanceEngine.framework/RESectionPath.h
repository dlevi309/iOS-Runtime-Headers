/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)element;
-(void)setElement:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)sectionName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSectionName:(id)arg1 element:(unsigned long long)arg2 ;
@end

