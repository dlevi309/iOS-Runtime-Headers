/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, CLLocation, NSData, NSNumber;

@interface STMapItem : STSiriModelObject {

	NSString* _title;
	CLLocation* _location;
	NSData* _placeData;
	BOOL _isCurrentLocation;
	NSNumber* _businessID;
	NSNumber* _localSearchProviderID;

}
+(BOOL)supportsSecureCoding;
-(id)initWithMKMapItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_aceContextObjectValue;
-(id)initWithCoder:(id)arg1 ;
-(Class)_aceCollectionClass;
@end

