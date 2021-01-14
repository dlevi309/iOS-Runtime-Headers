/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {

	NSNumber* _errorCode;
	NSString* _errorDomain;

}

@property (nonatomic,readonly) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) NSNumber * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
-(NSString *)errorDomain;
-(id)initWithContainerIdentifier:(id)arg1 error:(id)arg2 ;
-(NSNumber *)errorCode;
-(id)payload;
-(id)name;
-(void)dealloc;
@end

