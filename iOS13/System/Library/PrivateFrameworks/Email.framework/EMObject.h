/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMObject.h>
@class EMObjectID;


@protocol EMObject <NSObject>
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@required
-(EMObjectID *)objectID;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class EMObjectID, NSString;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable> {

	EMObjectID* _objectID;

}

@property (nonatomic,copy) EMObjectID * objectID;                                 //@synthesize objectID=_objectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EMObjectID *)objectID;
-(void)setObjectID:(EMObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(void)_commonInitWithObjectID:(id)arg1 ;
@end

