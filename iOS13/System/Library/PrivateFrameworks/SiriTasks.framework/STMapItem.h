/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_aceContextObjectValue;
-(Class)_aceCollectionClass;
-(id)initWithMKMapItem:(id)arg1 ;
@end

