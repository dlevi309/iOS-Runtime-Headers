/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary, NSString, TIInputContextHistory;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _triggerSourceType;
	NSSet* _availableApps;
	NSDictionary* _attributedString;
	NSString* _context;
	TIInputContextHistory* _inputContextHistory;
	NSString* _contentType;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;                          //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,retain) NSSet * availableApps;                                      //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributedString;                          //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSString * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) TIInputContextHistory * inputContextHistory;              //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isEquivalentDictionary:(id)arg1 second:(id)arg2 ;
-(NSString *)contentType;
-(NSDictionary *)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)context;
-(TIInputContextHistory *)inputContextHistory;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)triggerSourceType;
-(id)initWithSource:(unsigned char)arg1 attributes:(id)arg2 ;
-(void)setAvailableApps:(NSSet *)arg1 ;
-(id)initWithContext:(id)arg1 inputContextHistory:(id)arg2 contentType:(id)arg3 ;
-(NSSet *)availableApps;
-(BOOL)isEqualToProactiveTrigger:(id)arg1 ;
@end

