/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface RWIDriverState : NSObject <NSCopying> {

	BOOL _active;
	NSSet* _sessionIdentifiers;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSSet * sessionIdentifiers;                 //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
+(id)inactive;
+(id)active;
+(BOOL)isValidPayload:(id)arg1 ;
+(id)decodeFromPayload:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeToPayload:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
-(void)setSessionIdentifiers:(NSSet *)arg1 ;
@end

