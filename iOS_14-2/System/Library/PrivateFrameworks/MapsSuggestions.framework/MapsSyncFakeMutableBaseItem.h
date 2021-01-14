/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncMutableBaseItem.h>

@class NSUUID, NSString;

@interface MapsSyncFakeMutableBaseItem : NSObject <MapsSyncMutableBaseItem> {

	NSUUID* _identifier;

}

@property (nonatomic,copy) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

