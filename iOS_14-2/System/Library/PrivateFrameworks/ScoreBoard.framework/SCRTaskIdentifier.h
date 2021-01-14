/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCRTaskIdentifier : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)new;
+(id)identifier;
+(id)identifierWithName:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)_initWithName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

