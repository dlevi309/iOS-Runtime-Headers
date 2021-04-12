/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKAppPrototypeIdentifier, NSDictionary;

@interface IKAppDataItem : NSObject <NSCopying> {

	NSString* _type;
	NSString* _identifier;
	IKAppPrototypeIdentifier* _prototypeIdentifier;
	NSDictionary* _dataDictionary;

}

@property (nonatomic,readonly) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKAppPrototypeIdentifier * prototypeIdentifier;              //@synthesize prototypeIdentifier=_prototypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dataDictionary;                          //@synthesize dataDictionary=_dataDictionary - In the implementation block
-(NSString *)type;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dataDictionary;
-(IKAppPrototypeIdentifier *)prototypeIdentifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4 ;
-(id)valueForPropertyPath:(id)arg1 ;
@end

