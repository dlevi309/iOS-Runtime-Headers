/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXWebContentLocationProvider.h>
@class NSURL;


@protocol SXWebContentLocationProvider <NSObject>
@property (nonatomic,readonly) NSURL * location; 
@required
-(NSURL *)location;

@end


@class NSURL, NSString;

@interface SXWebContentLocationProvider : NSObject <SXWebContentLocationProvider> {

	NSURL* _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * location;                    //@synthesize location=_location - In the implementation block
-(NSURL *)location;
-(id)initWithLocation:(id)arg1 ;
@end

