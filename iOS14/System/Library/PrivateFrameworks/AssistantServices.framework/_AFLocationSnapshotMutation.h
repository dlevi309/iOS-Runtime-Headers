/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFLocationSnapshotMutating.h>

@class AFLocationSnapshot, NSNumber, NSString;

@interface _AFLocationSnapshotMutation : NSObject <AFLocationSnapshotMutating> {

	AFLocationSnapshot* _baseModel;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSNumber* _direction;
	NSNumber* _speed;
	NSNumber* _verticalAccuracy;
	NSNumber* _horizontalAccuracy;
	BOOL _preciseLocationEnabled;
	struct {
		unsigned isDirty : 1;
		unsigned hasLatitude : 1;
		unsigned hasLongitude : 1;
		unsigned hasAltitude : 1;
		unsigned hasDirection : 1;
		unsigned hasSpeed : 1;
		unsigned hasVerticalAccuracy : 1;
		unsigned hasHorizontalAccuracy : 1;
		unsigned hasPreciseLocationEnabled : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpeed:(id)arg1 ;
-(void)setAltitude:(id)arg1 ;
-(id)init;
-(void)setDirection:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(void)setPreciseLocationEnabled:(BOOL)arg1 ;
-(void)setVerticalAccuracy:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setHorizontalAccuracy:(id)arg1 ;
@end

