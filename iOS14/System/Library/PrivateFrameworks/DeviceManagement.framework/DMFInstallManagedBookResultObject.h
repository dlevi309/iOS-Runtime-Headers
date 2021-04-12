/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject {

	DMFBook* _book;

}

@property (nonatomic,copy,readonly) DMFBook * book;              //@synthesize book=_book - In the implementation block
+(BOOL)supportsSecureCoding;
-(DMFBook *)book;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBook:(id)arg1 ;
@end

