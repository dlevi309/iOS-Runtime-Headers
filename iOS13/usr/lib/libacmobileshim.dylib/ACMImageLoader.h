/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {

	NSMutableDictionary* _imagesCache;

}

@property (readonly) NSMutableDictionary * imagesCache; 
+(id)sharedInstance;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
-(NSMutableDictionary *)imagesCache;
@end

