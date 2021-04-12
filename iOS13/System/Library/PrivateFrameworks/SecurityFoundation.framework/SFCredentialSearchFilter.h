/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSDate, NSArray;

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _credentialSearchFilterInternal;
	NSPredicate* _attributesPredicate;

}

@property (nonatomic,retain) NSDate * minimumCreationDate; 
@property (nonatomic,retain) NSDate * maximumCreationDate; 
@property (nonatomic,retain) NSDate * minimumModificationDate; 
@property (nonatomic,retain) NSDate * maximumModificationDate; 
@property (nonatomic,retain) NSArray*<_SFServiceIdentifier> serviceIdentifiers; 
@property (nonatomic,retain) NSArray * usernames; 
@property (nonatomic,retain) NSPredicate * attributesPredicate;                              //@synthesize attributesPredicate=_attributesPredicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray*<_SFServiceIdentifier>)serviceIdentifiers;
-(void)setServiceIdentifiers:(NSArray*<_SFServiceIdentifier>)arg1 ;
-(NSDate *)minimumCreationDate;
-(NSDate *)maximumCreationDate;
-(NSDate *)minimumModificationDate;
-(NSDate *)maximumModificationDate;
-(NSArray *)usernames;
-(void)setMinimumCreationDate:(NSDate *)arg1 ;
-(void)setMaximumCreationDate:(NSDate *)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setMinimumModificationDate:(NSDate *)arg1 ;
-(void)setMaximumModificationDate:(NSDate *)arg1 ;
-(NSPredicate *)attributesPredicate;
-(void)setAttributesPredicate:(NSPredicate *)arg1 ;
@end

