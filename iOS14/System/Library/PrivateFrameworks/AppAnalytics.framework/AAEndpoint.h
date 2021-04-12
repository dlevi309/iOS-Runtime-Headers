/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/

#import <libobjc.A.dylib/AAEndpointType.h>

@class NSURL, NSString;

@interface AAEndpoint : NSObject <AAEndpointType> {

	 name;
	 sharedContainerIdentifier;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * sharedContainerIdentifier; 
-(id)init;
-(NSURL *)url;
-(NSString *)name;
-(id)initWithURL:(id)arg1 name:(id)arg2 sharedContainerIdentifier:(id)arg3 ;
-(NSString *)sharedContainerIdentifier;
@end

