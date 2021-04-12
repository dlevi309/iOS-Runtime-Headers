/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)build;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)setImageData:(id)arg1 ;
-(BOOL)canSetValueForProperty:(id)arg1 ;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(void)setUnknownProperties:(id)arg1 ;
-(id)validCountryCodes;
@end

