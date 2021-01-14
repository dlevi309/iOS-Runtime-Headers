/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying> {

	unsigned long long _savedHash;
	SEL _selector;
	NSArray* _arguments;

}

@property (assign,nonatomic) unsigned long long savedHash;              //@synthesize savedHash=_savedHash - In the implementation block
@property (assign,nonatomic) SEL selector;                              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) NSArray * arguments;                       //@synthesize arguments=_arguments - In the implementation block
+(id)requestIdentifierForInvocation:(id)arg1 ;
-(SEL)selector;
-(id)_argumentsForInvocation:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(unsigned long long)savedHash;
-(NSArray *)arguments;
-(id)description;
-(id)initWithInvocation:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSavedHash:(unsigned long long)arg1 ;
@end

