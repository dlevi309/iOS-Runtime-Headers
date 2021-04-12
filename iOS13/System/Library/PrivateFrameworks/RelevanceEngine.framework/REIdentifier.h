/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)dataSource;
-(NSString *)section;
-(id)initWithDataSource:(id)arg1 section:(id)arg2 identifier:(id)arg3 ;
@end

