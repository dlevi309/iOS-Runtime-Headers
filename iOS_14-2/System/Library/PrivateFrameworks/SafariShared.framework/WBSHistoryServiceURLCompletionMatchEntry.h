/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding> {

	unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> >* _streamData;
	NSString* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * url; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) float topSitesScore; 
@property (nonatomic,readonly) HistoryStreamedMatchEntry* streamData; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStreamData:(unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> >*)arg1 ;
-(NSString *)url;
-(id)initWithCoder:(id)arg1 ;
-(float)topSitesScore;
-(id)initWithURLString:(id)arg1 title:(id)arg2 topSitesScore:(float)arg3 ;
-(HistoryStreamedMatchEntry*)streamData;
-(NSString *)title;
@end

