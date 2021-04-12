/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)realtimeContactForNewContact:(id)arg1 ;
+(id)realtimeContactForFields:(id)arg1 updatedFields:(int)arg2 addedToCuratedContact:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(SGContact *)contact;
-(NSString *)cnContactIdentifier;
-(SGExtractionInfo *)extractionInfo;
-(int)updatedFields;
-(BOOL)isHarvested;
-(id)initWithState:(int)arg1 updatedFields:(int)arg2 contact:(id)arg3 identifier:(id)arg4 ;
-(id)markedAsHarvested;
-(BOOL)isEqualToRealtimeContact:(id)arg1 ;
-(void)setExtractionInfo;
-(void)setCnContactIdentifier:(NSString *)arg1 ;
@end

