/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardParsedResultBuilder.h>

@class NSMutableDictionary, NSString;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder> {

	NSMutableDictionary* _dictionaryRep;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factory;
-(id)build;
-(id)init;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)canSetValueForProperty:(id)arg1 ;
-(void)setUnknownProperties:(id)arg1 ;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setImageData:(id)arg1 ;
@end

