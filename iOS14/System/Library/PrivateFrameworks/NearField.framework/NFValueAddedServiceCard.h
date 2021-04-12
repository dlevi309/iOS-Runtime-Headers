/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding> {

	BOOL _userInterventionRequired;
	int _type;
	NSData* _identifier;
	NSData* _token;
	NSData* _data;

}

@property (nonatomic,retain) NSData * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL userInterventionRequired;              //@synthesize userInterventionRequired=_userInterventionRequired - In the implementation block
@property (assign) int type;                                   //@synthesize type=_type - In the implementation block
@property (retain) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(void)setToken:(NSData *)arg1 ;
-(NSData *)data;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(NSData *)token;
-(void)setUserInterventionRequired:(BOOL)arg1 ;
-(BOOL)userInterventionRequired;
@end

