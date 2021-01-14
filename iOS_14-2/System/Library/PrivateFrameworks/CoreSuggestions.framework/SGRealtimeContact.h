/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGRealtimeSuggestion.h>

@class SGContact, NSString, SGExtractionInfo;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion> {

	BOOL _isHarvested;
	int _state;
	int _updatedFields;
	SGContact* _contact;
	NSString* _cnContactIdentifier;
	SGExtractionInfo* _extractionInfo;

}

@property (nonatomic,readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int updatedFields;                              //@synthesize updatedFields=_updatedFields - In the implementation block
@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * cnContactIdentifier;                 //@synthesize cnContactIdentifier=_cnContactIdentifier - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,readonly) BOOL isHarvested;                               //@synthesize isHarvested=_isHarvested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)realtimeContactForFields:(id)arg1 updatedFields:(int)arg2 addedToCuratedContact:(id)arg3 ;
+(id)realtimeContactForNewContact:(id)arg1 ;
-(SGContact *)contact;
-(int)updatedFields;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(SGExtractionInfo *)extractionInfo;
-(BOOL)isHarvested;
-(unsigned long long)hash;
-(NSString *)cnContactIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(id)markedAsHarvested;
-(id)initWithState:(int)arg1 updatedFields:(int)arg2 contact:(id)arg3 identifier:(id)arg4 ;
-(BOOL)isEqualToRealtimeContact:(id)arg1 ;
-(void)setExtractionInfo;
-(void)setCnContactIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

