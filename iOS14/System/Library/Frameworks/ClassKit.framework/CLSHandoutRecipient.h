/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSHandoutRecipient : CLSObject <CLSRelationable> {

	NSString* _classID;
	NSString* _personID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * classID;                         //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy) NSString * personID;                        //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)classID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personID;
-(id)_init;
-(void)setPersonID:(NSString *)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(void)setClassID:(NSString *)arg1 ;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 ;
@end

