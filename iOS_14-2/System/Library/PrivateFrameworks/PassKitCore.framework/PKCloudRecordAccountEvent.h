/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKAccountEvent;

@interface PKCloudRecordAccountEvent : PKCloudRecordObject {

	PKAccountEvent* _event;

}

@property (nonatomic,retain) PKAccountEvent * event;              //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)description;
-(PKAccountEvent *)event;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(void)setEvent:(PKAccountEvent *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

