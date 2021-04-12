/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOCompletionGroup.h>

@class NSArray, NSString;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {

	NSString* _localizedSectionHeader;
	NSArray* _items;
	BOOL _shouldInterleaveClientResults;
	BOOL _enforceServerResultsOrder;

}

@property (nonatomic,readonly) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * localizedSectionHeader;               //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults;              //@synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults - In the implementation block
@property (nonatomic,readonly) BOOL enforceServerResultsOrder;                  //@synthesize enforceServerResultsOrder=_enforceServerResultsOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(NSString *)localizedSectionHeader;
-(id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4 collections:(id)arg5 publishers:(id)arg6 ;
@end

