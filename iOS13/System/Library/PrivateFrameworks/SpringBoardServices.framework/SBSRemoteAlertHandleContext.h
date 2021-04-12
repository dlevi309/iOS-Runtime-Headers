/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBSRemoteAlertHandleContext : NSObject <NSSecureCoding> {

	BOOL _active;
	NSString* _handleID;

}

@property (nonatomic,copy,readonly) NSString * handleID;               //@synthesize handleID=_handleID - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithHandleID:(id)arg1 ;
-(NSString *)handleID;
@end

