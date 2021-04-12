/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)name;
-(id)payload;
-(id)initWithContainerIdentifier:(id)arg1 error:(id)arg2 ;
-(NSNumber *)errorCode;
-(NSString *)errorDomain;
@end

