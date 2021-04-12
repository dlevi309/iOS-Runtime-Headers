/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <libobjc.A.dylib/CLSClientInterface.h>

@protocol CLSClientDelegate;
@class NSString;

@interface CLSClient : NSObject <CLSClientInterface> {

	id<CLSClientDelegate> _delagate;

}

@property (assign,nonatomic,__weak) id<CLSClientDelegate> delagate;              //@synthesize delagate=_delagate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)clientRemote_databaseRecreated;
-(void)setDelagate:(id<CLSClientDelegate>)arg1 ;
-(id<CLSClientDelegate>)delagate;
@end

