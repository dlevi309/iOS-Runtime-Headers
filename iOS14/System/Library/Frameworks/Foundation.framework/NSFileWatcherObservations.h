/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSFileWatcherObservations : NSObject {

	BOOL _attributesChanged;
	BOOL _contentsChanged;
	BOOL _deleted;
	BOOL _moved;
	NSString* _lastObservedPath;
	BOOL _didResetPath;
	NSString* _path;

}
-(id)initWithPath:(id)arg1 ;
-(void)addDeletion;
-(id)description;
-(void)notifyObserver:(/*^block*/id)arg1 ;
-(void)addContentsChange;
-(void)addDetectedMoveToPath:(id)arg1 ;
-(void)addAttributeChange;
-(void)addAnnouncedMoveToPath:(id)arg1 ;
-(void)dealloc;
@end

