/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSuggested;
	TUHandle* _handle;
	NSString* _label;

}

@property (nonatomic,readonly) TUHandle * handle;                  //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL isSuggested;                   //@synthesize isSuggested=_isSuggested - In the implementation block
+(BOOL)supportsSecureCoding;
-(TUHandle *)handle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(BOOL)arg3 ;
-(BOOL)isSuggested;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

