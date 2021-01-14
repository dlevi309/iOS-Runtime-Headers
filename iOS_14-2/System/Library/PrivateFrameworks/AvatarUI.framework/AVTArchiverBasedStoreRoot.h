/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AVTArchiverBasedStoreRoot : NSObject <NSSecureCoding> {

	NSArray* _domains;
	NSArray* _records;

}

@property (nonatomic,copy,readonly) NSArray * domains;              //@synthesize domains=_domains - In the implementation block
@property (nonatomic,copy,readonly) NSArray * records;              //@synthesize records=_records - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDomains:(id)arg1 records:(id)arg2 ;
-(NSArray *)domains;
@end

