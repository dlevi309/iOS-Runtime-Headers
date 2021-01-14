/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	BOOL _shouldIndentContent;
	BOOL _shouldIndentSeparator;

}

@property (assign,nonatomic) BOOL shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(void)setShouldIndentSeparator:(BOOL)arg1 ;
-(void)setShouldIndentContent:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldIndentContent;
-(BOOL)shouldIndentSeparator;
@end

