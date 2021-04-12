/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFProductInventoryResult.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFProductInventoryResult <NSObject>
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSArray * availability; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setProductIdentifier:(id)arg1;
-(NSString *)productIdentifier;
-(NSData *)jsonData;
-(NSArray *)availability;
-(void)setAvailability:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFProductInventoryResult : NSObject <SFProductInventoryResult, NSSecureCoding, NSCopying> {

	NSString* _productIdentifier;
	NSArray* _availability;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * productIdentifier;                             //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availability;                                   //@synthesize availability=_availability - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)availability;
-(void)setAvailability:(NSArray *)arg1 ;
@end

