/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SWLogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(id)createDatastoreFromMessage:(id)arg1 ;
@end

