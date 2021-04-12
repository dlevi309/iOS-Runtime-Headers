/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContact.h>

@class INPerson;

@interface WFINPersonContact : WFContact {

	INPerson* _person;

}

@property (nonatomic,retain) INPerson * person;              //@synthesize person=_person - In the implementation block
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)contactWithPerson:(id)arg1 ;
-(id)initWithINPerson:(id)arg1 ;
-(INPerson *)person;
-(void)setPerson:(INPerson *)arg1 ;
-(id)wfName;
-(id)wfSerializedRepresentation;
-(id)inPerson;
@end

