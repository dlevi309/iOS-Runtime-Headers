/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFRepresentation.h>

@class NSString, WFObjectType;

@interface WFObjectRepresentation : WFRepresentation {

	NSString* _wfName;
	id _object;

}

@property (nonatomic,readonly) id object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * specifiedName; 
@property (nonatomic,readonly) NSString * wfName;                     //@synthesize wfName=_wfName - In the implementation block
@property (nonatomic,readonly) WFObjectType * wfType; 
+(BOOL)supportsSecureCoding;
+(id)object:(id)arg1 ;
+(id)object:(id)arg1 named:(id)arg2 ;
+(id)objects:(id)arg1 ;
+(id)objects:(id)arg1 named:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(NSString *)wfName;
-(WFObjectType *)wfType;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEncodable;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)initWithObject:(id)arg1 named:(id)arg2 ;
-(NSString *)specifiedName;
@end

