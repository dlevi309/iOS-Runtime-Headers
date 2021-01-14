/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFTyping.h>
#import <libobjc.A.dylib/WFCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFType, NSString;

@interface WFRepresentation : NSObject <WFNaming, WFTyping, WFCopying, NSSecureCoding>

@property (getter=isEncodable,nonatomic,readonly) BOOL encodable; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,readonly) WFType * wfType; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithName:(id)arg1 ;
-(NSString *)wfName;
-(WFType *)wfType;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEncodable;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
@end

