/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming> {

	long long _byteCount;

}

@property (nonatomic,readonly) long long byteCount;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSString * formattedString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wfName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)byteCount;
-(NSString *)formattedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithByteCount:(long long)arg1 ;
-(id)wfSerializedRepresentation;
@end

