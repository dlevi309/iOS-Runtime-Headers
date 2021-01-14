/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CXHandle, NSString;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	CXHandle* _handle;
	NSString* _label;

}

@property (nonatomic,retain) CXHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                 //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(CXHandle *)arg1 ;
-(CXHandle *)handle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithHandle:(id)arg1 label:(id)arg2 ;
@end

