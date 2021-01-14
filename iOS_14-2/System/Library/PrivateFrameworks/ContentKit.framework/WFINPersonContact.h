/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContact.h>

@class INPerson;

@interface WFINPersonContact : WFContact {

	INPerson* _person;

}

@property (nonatomic,retain) INPerson * person;              //@synthesize person=_person - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)contactWithPerson:(id)arg1 ;
-(INPerson *)person;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithINPerson:(id)arg1 ;
-(id)wfName;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(void)setPerson:(INPerson *)arg1 ;
-(id)wfSerializedRepresentation;
-(id)inPerson;
@end

