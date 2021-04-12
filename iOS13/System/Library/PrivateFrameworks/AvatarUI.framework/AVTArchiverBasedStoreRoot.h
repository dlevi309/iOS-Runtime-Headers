/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)domains;
-(NSArray *)records;
-(id)initWithDomains:(id)arg1 records:(id)arg2 ;
@end

