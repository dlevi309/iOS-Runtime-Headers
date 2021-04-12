/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SVVideoSharingPolicy.h>

@class NSString;

@interface NUVideoSharingPolicy : NSObject <SVVideoSharingPolicy> {

	BOOL _sharingEnabled;

}

@property (assign,getter=isSharingEnabled,nonatomic) BOOL sharingEnabled;              //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(id)initWithSharingEnabled:(BOOL)arg1 ;
-(BOOL)isVideoShareable:(id)arg1 ;
-(BOOL)isSharingEnabled;
@end

