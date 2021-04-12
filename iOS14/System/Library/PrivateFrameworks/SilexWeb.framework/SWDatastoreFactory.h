/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWDatastoreFactory.h>

@protocol SWDatastoreFactory <NSObject>
@required
-(id)createDatastoreFromMessage:(id)arg1;

@end


@protocol SWLogger;
@class NSString;

@interface SWDatastoreFactory : NSObject <SWDatastoreFactory> {

	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLogger:(id)arg1 ;
-(id<SWLogger>)logger;
-(id)createDatastoreFromMessage:(id)arg1 ;
@end

