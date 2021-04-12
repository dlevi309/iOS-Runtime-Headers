/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUHandle *)handle;
-(NSString *)label;
-(BOOL)isSuggested;
-(id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(BOOL)arg3 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
@end

