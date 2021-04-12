/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding> {

	NSArray* _trains;
	NSNumber* _validityStartDate;
	NSNumber* _validityTerm;

}

@property (nonatomic,copy,readonly) NSArray * trains;                          //@synthesize trains=_trains - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityTerm;                   //@synthesize validityTerm=_validityTerm - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)validityStartDate;
-(NSNumber *)validityTerm;
-(NSArray *)trains;
@end

