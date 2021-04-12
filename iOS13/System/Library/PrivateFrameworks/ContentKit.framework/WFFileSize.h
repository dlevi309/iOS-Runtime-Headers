/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)byteCount;
-(NSString *)formattedString;
-(id)initWithByteCount:(long long)arg1 ;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
@end

