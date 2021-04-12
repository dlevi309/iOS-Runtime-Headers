/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface ENDownloadManagerState : NSObject <NSSecureCoding> {

	NSDictionary* _statesByURL;

}

@property (nonatomic,copy,readonly) NSArray * endpoints; 
@property (nonatomic,copy,readonly) NSArray * endpointStates; 
+(BOOL)supportsSecureCoding;
-(void)setEndpoints:(NSArray *)arg1 ;
-(NSArray *)endpoints;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)endpointStates;
-(id)stateForServerBaseURL:(id)arg1 ;
@end

