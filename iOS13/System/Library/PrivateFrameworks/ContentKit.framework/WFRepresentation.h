/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEncodable;
-(id)copyWithName:(id)arg1 ;
-(NSString *)wfName;
-(WFType *)wfType;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
@end

