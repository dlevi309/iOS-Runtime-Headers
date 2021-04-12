/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <libobjc.A.dylib/BKHIDEventSenderInfo.h>

@class NSString, BKSHIDEventSenderDescriptor;

@interface BKHIDAccessibilitySender : NSObject <BKHIDEventSenderInfo> {

	BOOL _authenticated;
	BOOL _builtIn;
	int _eventSource;
	unsigned _primaryUsagePage;
	unsigned _primaryUsage;
	NSString* _displayUUID;
	unsigned long long _senderID;
	BKSHIDEventSenderDescriptor* _senderDescriptor;

}

@property (nonatomic,copy) NSString * displayUUID;                                      //@synthesize displayUUID=_displayUUID - In the implementation block
@property (assign,nonatomic) int eventSource;                                           //@synthesize eventSource=_eventSource - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;                               //@synthesize senderID=_senderID - In the implementation block
@property (assign,nonatomic) unsigned primaryUsagePage;                                 //@synthesize primaryUsagePage=_primaryUsagePage - In the implementation block
@property (assign,nonatomic) unsigned primaryUsage;                                     //@synthesize primaryUsage=_primaryUsage - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                 //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isBuiltIn,nonatomic) BOOL builtIn;                             //@synthesize builtIn=_builtIn - In the implementation block
@property (nonatomic,copy) BKSHIDEventSenderDescriptor * senderDescriptor;              //@synthesize senderDescriptor=_senderDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isPencilDigitizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessibilityHIDServices;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isBuiltIn;
-(unsigned)primaryUsage;
-(void)setSenderDescriptor:(BKSHIDEventSenderDescriptor *)arg1 ;
-(BOOL)isAuthenticated;
-(void)setDisplayUUID:(NSString *)arg1 ;
-(NSString *)displayUUID;
-(unsigned long long)senderID;
-(unsigned)primaryUsagePage;
-(id)initWithSenderID:(unsigned long long)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setPrimaryUsagePage:(unsigned)arg1 ;
-(int)eventSource;
-(void)setPrimaryUsage:(unsigned)arg1 ;
-(void)setEventSource:(int)arg1 ;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;
-(BOOL)isPencilDigitizer;
-(void)setBuiltIn:(BOOL)arg1 ;
@end

