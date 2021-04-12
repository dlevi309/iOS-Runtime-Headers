/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@class SWDatastore, NSString, WKUserScript;

@interface SWDatastoreSetupScript : NSObject <SWScript> {

	SWDatastore* _datastore;

}

@property (nonatomic,readonly) SWDatastore * datastore;                  //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)source;
-(SWDatastore *)datastore;
-(id)initWithDatastore:(id)arg1 ;
-(NSString *)identifier;
-(WKUserScript *)userScript;
-(BOOL)queueable;
@end

