/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSURI, NSDate;

@interface IDSPhoneTemporaryAliasDescription : NSObject <NSSecureCoding, NSCopying> {

	BOOL _selected;
	IDSURI* _URI;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) IDSURI * URI;                         //@synthesize URI=_URI - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURI:(id)arg1 expirationDate:(id)arg2 selected:(BOOL)arg3 ;
-(IDSURI *)URI;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)selected;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

