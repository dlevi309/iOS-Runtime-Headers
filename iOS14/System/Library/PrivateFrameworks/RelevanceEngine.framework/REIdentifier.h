/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REIdentifier : NSString <NSCopying> {

	unsigned long long _hash;
	unsigned long long _length;
	NSString* _dataSource;
	NSString* _section;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * section;                 //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSString *)section;
-(unsigned long long)length;
-(NSString *)dataSource;
-(id)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 section:(id)arg2 identifier:(id)arg3 ;
@end

