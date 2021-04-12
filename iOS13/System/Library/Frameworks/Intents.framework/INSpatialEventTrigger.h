/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemark, NSArray, NSString;

@interface INSpatialEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	CLPlacemark* _placemark;
	long long _event;
	NSArray* _suggestedValues;
	long long _mobileSpace;

}

@property (nonatomic,copy,readonly) NSArray * suggestedValues;              //@synthesize suggestedValues=_suggestedValues - In the implementation block
@property (nonatomic,readonly) long long mobileSpace;                       //@synthesize mobileSpace=_mobileSpace - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * placemark;                //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) long long event;                             //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)event;
-(id)_dictionaryRepresentation;
-(CLPlacemark *)placemark;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)initWithPlacemark:(id)arg1 event:(long long)arg2 ;
-(id)initWithPlacemark:(id)arg1 event:(long long)arg2 suggestedValues:(id)arg3 mobileSpace:(long long)arg4 ;
-(id)initWithMobileSpace:(long long)arg1 event:(long long)arg2 ;
-(NSArray *)suggestedValues;
-(long long)mobileSpace;
@end

