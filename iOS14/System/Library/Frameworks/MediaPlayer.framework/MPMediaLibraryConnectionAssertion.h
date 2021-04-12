/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {

	MPMediaLibrary* _library;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(NSString *)identifier;
-(void)dealloc;
@end

