/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFPBAlert, NSString;

@interface WFPBAlertRequest : PBRequest <NSCopying> {

	WFPBAlert* _alert;
	NSString* _associatedRunRequestIdentifier;

}

@property (nonatomic,retain) NSString * associatedRunRequestIdentifier;              //@synthesize associatedRunRequestIdentifier=_associatedRunRequestIdentifier - In the implementation block
@property (nonatomic,retain) WFPBAlert * alert;                                      //@synthesize alert=_alert - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setAlert:(WFPBAlert *)arg1 ;
-(WFPBAlert *)alert;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)associatedRunRequestIdentifier;
-(void)setAssociatedRunRequestIdentifier:(NSString *)arg1 ;
@end

